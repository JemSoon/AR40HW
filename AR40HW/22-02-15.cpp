// GameArray.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.
//

#include <iostream>
#include <assert.h>
#include <crtdbg.h>

using DataType = int;

// 
class GameArray
{
private:
    int Size_;
    DataType* ArrData_;

public:
    int GetSize()
    {
        return Size_;
    }

    DataType& operator[](int _Index)
    {
        if (Size_ <= _Index)
        {
            assert(false);
        }

        return ArrData_[_Index];
    }

    inline void operator=(const GameArray& _Other)
    {
        ReSize(_Other.Size_);

        // �̰� ���ο� ī�� 
        // Ȥ�� ���� ������ �Ѵ�.
        //this->ArrData_ = _Other.ArrData_;
        //this->Size_ = _Other.Size_;

        // �̰� �� ī��
        // Ȥ�� ���� ������ �Ѵ�.
        for (size_t i = 0; i < this->Size_; i++)
        {
            this->ArrData_[i] = _Other.ArrData_[i];
        }

        return;
    }

    inline void AllValueSetting(const DataType& Data)
    {
        for (size_t i = 0; i < this->Size_; i++)
        {
            this->ArrData_[i] = Data;
        }
    }


    inline void Release()
    {
        if (nullptr != ArrData_)
        {
            delete[] ArrData_;
            ArrData_ = nullptr;
        }
    }

    void ReSize(unsigned int _Size)
    {
        int BeforeSize = Size_;
        int AfterSize = _Size;

        DataType* BeforeValue = ArrData_;

        ArrData_ = new DataType[AfterSize];
        Size_ = _Size;

        if (BeforeSize > AfterSize)
        {
            for (int i = 0; i < AfterSize; ++i)
            {
                ArrData_[i] = BeforeValue[i];
            }
        }
        if (BeforeSize < AfterSize)
        {
            for (int i = 0; i < BeforeSize; ++i)
            {
                ArrData_[i] = BeforeValue[i];
            }
        }

        if (nullptr != BeforeValue)
        {
            delete BeforeValue;
            BeforeValue = nullptr;
        }
 
    }

public:
    GameArray(unsigned int _Size)
        : ArrData_(nullptr)
        , Size_(0)
    {
        ReSize(_Size);
    }

    ~GameArray()
    {
        Release();
    }
};

int main()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    GameArray NewArray = GameArray(10);
    // GameArray NewArray2 = GameArray(5);
    GameArray NewArray2 = GameArray(20);

    NewArray = NewArray2;

    for (size_t i = 0; i < NewArray.GetSize(); i++)
    {
         std::cout << NewArray[i] << std::endl;
    }

}

