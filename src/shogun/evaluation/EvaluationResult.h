/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * Copyright (C) 2012 Jacob Walker
 */

#ifndef CEVALUATIONRESULT_H_
#define CEVALUATIONRESULT_H_

#include <shogun/base/SGObject.h>

namespace shogun
{

/** Type of evaluation result.
 *  Currently this includes
 *  Cross Validation and Gradient
 *  Evaluation
 */
enum EEvaluationResultType
{
	CROSSVALIDATION_RESULT,
	GRADIENTEVALUATION_RESULT
};

/** @brief EvaluationResult is the abstract
 * class that contains the result generated by
 * the MachineEvaluation class.
 */
class CEvaluationResult: public CSGObject
{

public:

	/*Constructor*/
	CEvaluationResult();

	/*Destructor*/
	virtual ~CEvaluationResult();

	/** return what type of result we are.
	 *
	 * abstract base method
	 *
	 * @return result type
	 */
	virtual EEvaluationResultType get_result_type() = 0;

	/** print result */
	virtual void print_result() = 0;
};

} /* namespace shogun */

#endif /* CEVALUATIONRESULT_H_ */
