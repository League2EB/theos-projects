/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "VKImageFilter.h"


__attribute__((visibility("hidden")))
@interface VKImageFilterScale : VKImageFilter {
	CGSize _size;
	XXStruct_32J64A _settings;
}
@property(readonly, assign, nonatomic) XXStruct_32J64A settings;
@property(readonly, assign, nonatomic) CGSize size;
+(CGRect)rectToDrawImageWithSize:(CGSize)size canvasSize:(CGSize)size2 mode:(int)mode;
+(CGRect)rectToDrawImageWithSize:(CGSize)size canvasSize:(CGSize)size2 settings:(XXStruct_32J64A)settings;
+(id)scaleToSize:(CGSize)size withMode:(int)mode;
+(id)scaleToSize:(CGSize)size withSettings:(XXStruct_32J64A)settings;
-(id)infoString;
-(void)process:(id)process inDrawingContext:(CGContextRef)drawingContext;
-(id)contextForImage:(id)image;
-(id)initWithSize:(CGSize)size mode:(int)mode;
-(id)initWithSize:(CGSize)size settings:(XXStruct_32J64A)settings;
@end

