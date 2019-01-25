#import <Foundation/Foundation.h>
#import "HTTPResponse.h"

@class CocoaHTTPConnection;


@interface HTTPFileResponse : NSObject <HTTPResponse>
{
	CocoaHTTPConnection *connection;
	
	NSString *filePath;
	UInt64 fileLength;
	UInt64 fileOffset;
	
	BOOL aborted;
	
	int fileFD;
	void *buffer;
	NSUInteger bufferSize;
}

- (id)initWithFilePath:(NSString *)filePath forConnection:(CocoaHTTPConnection *)connection;
- (NSString *)filePath;

@end
