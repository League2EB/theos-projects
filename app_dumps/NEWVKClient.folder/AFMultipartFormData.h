/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AFMultipartFormData.h"

@class NSData, NSMutableData;

@protocol AFMultipartFormData
-(void)appendString:(id)string;
-(void)appendData:(id)data;
-(BOOL)appendPartWithFileURL:(id)fileURL name:(id)name error:(id*)error;
-(void)appendPartWithFileData:(id)fileData name:(id)name fileName:(id)name3 mimeType:(id)type;
-(void)appendPartWithFormData:(id)formData name:(id)name;
-(void)appendPartWithHeaders:(id)headers body:(id)body;
@end

__attribute__((visibility("hidden")))
@interface AFMultipartFormData : XXUnknownSuperclass <AFMultipartFormData> {
	unsigned _stringEncoding;
	NSMutableData* _mutableData;
}
@property(readonly, assign) NSData* data;
@property(retain, nonatomic) NSMutableData* mutableData;
@property(assign, nonatomic) unsigned stringEncoding;
-(void)appendString:(id)string;
-(void)appendData:(id)data;
-(BOOL)appendPartWithFileURL:(id)fileURL name:(id)name error:(id*)error;
-(void)appendPartWithFileData:(id)fileData name:(id)name fileName:(id)name3 mimeType:(id)type;
-(void)appendPartWithFormData:(id)formData name:(id)name;
-(void)appendPartWithHeaders:(id)headers body:(id)body;
-(void)dealloc;
-(id)initWithStringEncoding:(unsigned)stringEncoding;
@end

