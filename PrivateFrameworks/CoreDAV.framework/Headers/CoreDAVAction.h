/* Runtime dump - CoreDAVAction
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVAction : NSObject
{
    int _action;
    id _context;
    id _changeContext;
}

@property (readonly, nonatomic) int action;
@property (readonly, nonatomic) id context;
@property (retain, nonatomic) id changeContext;

- (void)dealloc;
- (NSString *)description;
- (int)action;
- (NSString *)context;
- (NSString *)changeContext;
- (void)setChangeContext:(NSObject *)arg0;
- (CoreDAVAction *)initWithAction:(int)arg0 context:(NSObject *)arg1;

@end
