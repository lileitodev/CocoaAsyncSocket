#import <Cocoa/Cocoa.h>

@class GCDAsyncSocket;

@interface AppController : NSObject
{
	GCDAsyncSocket *listenSocket;
	NSMutableArray *connectedSockets;
	
	BOOL isRunning;
	
    IBOutlet id logView;
    IBOutlet id portField;
    IBOutlet id startStopButton;
}
- (IBAction)startStop:(id)sender;
@end
