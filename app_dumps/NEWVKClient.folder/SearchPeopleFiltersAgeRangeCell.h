/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMCell.h"

@class VKRangeSlider, UILabel;

__attribute__((visibility("hidden")))
@interface SearchPeopleFiltersAgeRangeCell : VKMCell {
	VKRangeSlider* _slider;
	UILabel* _valueLabel;
}
@property(retain, nonatomic) UILabel* valueLabel;
@property(retain, nonatomic) VKRangeSlider* slider;
-(void).cxx_destruct;
-(void)updateLabelText;
-(void)sliderValueChanged:(id)changed;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

