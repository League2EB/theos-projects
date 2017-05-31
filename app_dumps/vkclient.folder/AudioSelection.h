/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKRenderable.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AudioSelection : VKRenderable {
	NSMutableArray* _audios;
}
@property(retain, nonatomic) NSMutableArray* audios;
-(id)items;
-(unsigned)count;
-(BOOL)contains:(id)contains;
-(void)remove:(id)remove;
-(void)add:(id)add;
-(id)init;
-(void)dealloc;
@end
