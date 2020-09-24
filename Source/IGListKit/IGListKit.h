/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import "../IGListDiffKit/IGListCompatibility.h"

/**
 * Project version number for IGListKit.
 */
FOUNDATION_EXPORT double IGListKitVersionNumber;

/**
 * Project version string for IGListKit.
 */
FOUNDATION_EXPORT const unsigned char IGListKitVersionString[];

#if TARGET_OS_EMBEDDED || TARGET_OS_SIMULATOR

// iOS and tvOS only:

#import "IGListAdapter.h"
#import "IGListAdapterDataSource.h"
#import "IGListAdapterDelegate.h"
#import "IGListAdapterUpdateListener.h"
#import "IGListAdapterUpdater.h"
#import "IGListAdapterUpdaterDelegate.h"
#import "IGListBatchContext.h"
#import "IGListBindable.h"
#import "IGListBindingSectionController.h"
#import "IGListBindingSectionControllerDataSource.h"
#import "IGListBindingSectionControllerSelectionDelegate.h"
#import "IGListCollectionContext.h"
#import "IGListCollectionView.h"
#import "IGListCollectionViewLayout.h"
#import "IGListDisplayDelegate.h"
#import "IGListGenericSectionController.h"
#import "IGListCollectionViewDelegateLayout.h"
#import "IGListReloadDataUpdater.h"
#import "IGListScrollDelegate.h"
#import "IGListSectionController.h"
#import "IGListSingleSectionController.h"
#import "IGListSupplementaryViewSource.h"
#import "IGListTransitionDelegate.h"
#import "IGListUpdatingDelegate.h"
#import "IGListWorkingRangeDelegate.h"
#import "IGListCollectionViewDelegateLayout.h"

#endif

// Shared (iOS, tvOS, macOS compatible):

#import "../IGListDiffKit/IGListAssert.h"
#import "../IGListDiffKit/IGListBatchUpdateData.h"
#import "../IGListDiffKit/IGListDiff.h"
#import "../IGListDiffKit/IGListDiffable.h"
#import "../IGListDiffKit/IGListExperiments.h"
#import "../IGListDiffKit/IGListIndexPathResult.h"
#import "../IGListDiffKit/IGListIndexSetResult.h"
#import "../IGListDiffKit/IGListMoveIndex.h"
#import "../IGListDiffKit/IGListMoveIndexPath.h"
#import "../IGListDiffKit/NSNumber+IGListDiffable.h"
#import "../IGListDiffKit/NSString+IGListDiffable.h"
