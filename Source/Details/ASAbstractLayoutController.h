//
//  ASAbstractLayoutController.h
//  AsyncDisplayKit
//
//  Copyright (c) 2014-present, Facebook, Inc.  All rights reserved.
//  This source code is licensed under the BSD-style license found in the
//  LICENSE file in the root directory of this source tree. An additional grant
//  of patent rights can be found in the PATENTS file in the same directory.
//

#import <AsyncDisplayKit/ASLayoutController.h>
#import <AsyncDisplayKit/ASBaseDefines.h>

NS_ASSUME_NONNULL_BEGIN

ASDISPLAYNODE_EXTERN_C_BEGIN

FOUNDATION_EXPORT ASDirectionalScreenfulBuffer ASDirectionalScreenfulBufferHorizontal(ASScrollDirection scrollDirection, ASRangeTuningParameters rangeTuningParameters);

FOUNDATION_EXPORT ASDirectionalScreenfulBuffer ASDirectionalScreenfulBufferVertical(ASScrollDirection scrollDirection, ASRangeTuningParameters rangeTuningParameters);

FOUNDATION_EXPORT CGRect CGRectExpandToRangeWithScrollableDirections(CGRect rect, ASRangeTuningParameters tuningParameters, ASScrollDirection scrollableDirections, ASScrollDirection scrollDirection);

ASDISPLAYNODE_EXTERN_C_END

@interface ASAbstractLayoutController : NSObject <ASLayoutController>

@end


NS_ASSUME_NONNULL_END
