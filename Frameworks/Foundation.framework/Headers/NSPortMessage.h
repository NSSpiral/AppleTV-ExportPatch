/* Runtime dump - NSPortMessage
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPortMessage : NSObject
{
    NSPort * localPort;
    NSPort * remotePort;
    NSMutableArray * components;
    unsigned int msgid;
    void * reserved2;
    void * reserved;
}

@property (readonly, copy) NSArray * components;
@property (readonly, retain) NSPort * receivePort;
@property (readonly, retain) NSPort * sendPort;
@property unsigned int msgid;

- (NSPortMessage *)initWithSendPort:(NSPort *)arg0 receivePort:(NSPort *)arg1 components:(NSArray *)arg2;
- (void)setMsgid:(unsigned int)arg0;
- (NSPortMessage *)initWithReceivePort:(NSPort *)arg0 sendPort:(NSPort *)arg1 components:(NSArray *)arg2;
- (NSPort *)sendPort;
- (NSPort *)receivePort;
- (unsigned int)msgid;
- (char)sendBeforeDate:(NSDate *)arg0;
- (void)dealloc;
- (NSPortMessage *)copyWithZone:(struct _NSZone *)arg0;
- (NSArray *)components;

@end
