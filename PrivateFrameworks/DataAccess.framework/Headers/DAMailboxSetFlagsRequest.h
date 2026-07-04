/* Runtime dump - DAMailboxSetFlagsRequest
 * Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAMailboxSetFlagsRequest : DAMailboxRequest
{
    unsigned long long _onFlags;
    unsigned long long _offFlags;
}

@property (nonatomic) unsigned long long onFlags;
@property (nonatomic) unsigned long long offFlags;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setOnFlags:(unsigned long long)arg0;
- (void)setOffFlags:(unsigned long long)arg0;
- (DAMailboxSetFlagsRequest *)initRequestWithSetFlags:(unsigned long long)arg0 unsetFlags:(unsigned long long)arg1 message:(NSString *)arg2;
- (unsigned long long)onFlags;
- (unsigned long long)offFlags;

@end
