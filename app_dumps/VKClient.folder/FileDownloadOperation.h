/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AsyncOperation.h"

@class NSURL, NSString;

__attribute__((visibility("hidden")))
@interface FileDownloadOperation : AsyncOperation {
	BOOL _ignoreLocalCacheData;
	NSURL* _url;
	NSString* _outputFilePath;
}
@property(assign, nonatomic) BOOL ignoreLocalCacheData;
@property(copy, nonatomic) NSString* outputFilePath;
@property(copy, nonatomic) NSURL* url;
+(id)generateRandomFilePathForURL:(id)url;
+(id)operationWithURL:(id)url outputFilePath:(id)path;
-(void).cxx_destruct;
-(void)removeOutputFile;
-(void)runAsync;
-(id)initWithURL:(id)url outputFilePath:(id)path;
@end

