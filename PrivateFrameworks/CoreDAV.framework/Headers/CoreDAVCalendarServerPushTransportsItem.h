/* Runtime dump - CoreDAVCalendarServerPushTransportsItem
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVCalendarServerPushTransportsItem : CoreDAVItem
{
    NSMutableSet * _transports;
}

@property (retain, nonatomic) NSMutableSet * transports;

+ (NSArray *)copyParseRules;

- (void)dealloc;
- (CoreDAVCalendarServerPushTransportsItem *)init;
- (NSString *)description;
- (NSMutableSet *)transports;
- (void)addTransport:(HMDIDSMessageTransport *)arg0;
- (void)setTransports:(NSMutableSet *)arg0;

@end
