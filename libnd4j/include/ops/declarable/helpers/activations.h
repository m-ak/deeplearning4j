/*******************************************************************************
 * Copyright (c) 2015-2018 Skymind, Inc.
 *
 * This program and the accompanying materials are made available under the
 * terms of the Apache License, Version 2.0 which is available at
 * https://www.apache.org/licenses/LICENSE-2.0.
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 * SPDX-License-Identifier: Apache-2.0
 ******************************************************************************/

//
// @author Yurii Shyrma (iuriish@yahoo.com), created on 19.04.2018
//

#ifndef LIBND4J_ACTIVATIONS_H
#define LIBND4J_ACTIVATIONS_H

#include <ops/declarable/helpers/helpers.h>

namespace nd4j {
namespace ops {
namespace helpers {

	template <typename T>
	void softMaxForVector(const NDArray<T>& input, NDArray<T>& output);

	template <typename T>
	void logSoftMaxForVector(const NDArray<T>& input, NDArray<T>& output);

	template <typename T>
	void softmax(const NDArray<T>& input, NDArray<T>& output, const int dimension);

	template <typename T>
	void prelu(const NDArray<T>& input, const NDArray<T>& alpha, NDArray<T>& output);

	template <typename T>
	void preluBP(const NDArray<T>& input, const NDArray<T>& alpha, const NDArray<T>& dLdO, NDArray<T>& dLdI, NDArray<T>& dLdA);

}
}
}


#endif //LIBND4J_ACTIVATIONS_H
