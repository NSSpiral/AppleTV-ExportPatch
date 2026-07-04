/* Runtime dump - SBUISnapshotContext
 * Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUISnapshotContext : NSObject <BSXPCCoding>
{
    UIScreen * _screen;
    char _excludesNotificationCenter;
}

@property (retain, nonatomic) UIScreen * screen;
@property (nonatomic) char excludesNotificationCenter;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)snapshotContextForScreen:(NSObject *)arg0;

- (SBUISnapshotContext *)initWithScreen:(UIScreen *)arg0;
- (void)dealloc;
- (UIScreen *)screen;
- (void)setScreen:(UIScreen *)arg0;
- (SBUISnapshotContext *)initWithXPCDictionary:(NSDictionary *)arg0;
- (void)encodeWithXPCDictionary:(NSDictionary *)arg0;
- (void)setExcludesNotificationCenter:(char)arg0;
- (char)excludesNotificationCenter;

@end
