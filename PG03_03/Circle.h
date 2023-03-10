#pragma once
#include "Shape.h"

class Circle : public IShape
{
public:		//メンバ関数
	//面積の計算
	void size() override;

	//面積の値の描画
	void draw() override;

private:	//メンバ変数
	//半径
	float radius = 16;

	//π
	const float pai = 3.14;

	//答えを入れる変数
	float ans = 0;
};
