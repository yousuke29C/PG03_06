#pragma once

class IShape
{
public:		//メンバ関数
	//面積の計算
	virtual void size() = 0;

	//面積の値の描画
	virtual void draw() = 0;

private:

};
