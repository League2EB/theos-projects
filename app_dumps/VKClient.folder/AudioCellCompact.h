/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AudioCellPlayableExtraBase.h"
#import "VKClient-Structs.h"

@class VKAudioMinimized, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface AudioCellCompact : AudioCellPlayableExtraBase {
	UILabel* _trackNumberLabel;
	UIButton* _playPauseButton;
}
@property(retain, nonatomic) VKAudioMinimized* domain;
@property(retain, nonatomic) UIButton* playPauseButton;
@property(retain, nonatomic) UILabel* trackNumberLabel;
+(void)prerender:(id)prerender;
-(void).cxx_destruct;
-(id)audio;
-(void)update;
-(void)attach:(id)attach expectedReuse:(double)reuse;
-(void)layoutSubviews;
-(id)createSubviews;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end
