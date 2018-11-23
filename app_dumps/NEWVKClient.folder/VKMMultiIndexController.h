/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMToolbarController.h"

@class MultiIndexModel;

__attribute__((visibility("hidden")))
@interface VKMMultiIndexController : VKMToolbarController {
}
@property(retain, nonatomic) MultiIndexModel* model;
-(void)segmentedControlChanged:(id)changed;
-(void)switchToMode:(unsigned)mode;
-(BOOL)VKMScrollViewShouldShowTeaser;
-(BOOL)VKMScrollViewShouldShowTeaserForMode:(unsigned)vkmscrollView;
-(id)titleForSegmentAtIndex:(unsigned)index;
-(BOOL)isToolbarHidden;
-(unsigned)numberOfSegments;
-(void)viewWillAppear:(BOOL)view;
-(id)initWithMain:(id)main andModel:(id)model;
@end
