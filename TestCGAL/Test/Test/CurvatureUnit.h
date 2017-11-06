#ifndef __CURVATURE_UNIT__
#define __CURVATURE_UNIT__

#include "CGAL_geodesic.h"
#include <vector>

class CurvatureUnit {
private:
	double gCurve;
	double mCurve;
	double K1;
	double K2;
	face_iterator fIter;
	std::vector<int> faceColor;
	std::vector<double> features;

public:
	CurvatureUnit(face_iterator fIter,double gCurve, double mCurve, double k1, double k2) {
		this->fIter = fIter;
		this->gCurve = gCurve;
		this->mCurve = mCurve;
		K1 = k1;
		K2 = k2;
	}

	void setColor(std::vector<int> faceColor) { this->faceColor = faceColor;}
	void computeFeatures() {}
	std::vector<double> getFeatures() { return this->features; }
	double getGCurve() { return gCurve; }
	double getMCurve() { return mCurve; }

	std::vector<double> getPrincipleCurves() { 
		std::vector<double> temp;
		temp.push_back(K1);
		temp.push_back(K2);
		return temp;
	}
};

#endif