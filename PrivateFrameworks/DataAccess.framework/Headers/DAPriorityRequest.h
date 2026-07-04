/* Runtime dump - DAPriorityRequest
 * Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAPriorityRequest : NSObject
{
    int _refreshDataclasses;
    int _UIDataclasses;
}

@property (nonatomic) int refreshDataclasses;
@property (nonatomic) int UIDataclasses;

- (int)refreshDataclasses;
- (void)setRefreshDataclasses:(int)arg0;
- (int)UIDataclasses;
- (void)setUIDataclasses:(int)arg0;

@end
