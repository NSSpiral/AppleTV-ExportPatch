/* Runtime dump - BRStateMachineEventTuple
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRStateMachineEventTuple : NSObject
{
    NSString * _event;
    id _context;
    NSDictionary * _userInfo;
}

@property (retain) NSString * event;
@property (retain) id context;
@property (retain) NSDictionary * userInfo;

- (void)dealloc;
- (void)setUserInfo:(NSDictionary *)arg0;
- (NSDictionary *)userInfo;
- (NSString *)context;
- (void)setContext:(NSObject *)arg0;
- (void)setEvent:(NSString *)arg0;
- (NSString *)event;

@end
