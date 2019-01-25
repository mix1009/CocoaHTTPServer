#import "CocoaHTTPConnection.h"

@interface DAVConnection : CocoaHTTPConnection {
	id requestContentBody;
  NSOutputStream* requestContentStream;
}
@end
