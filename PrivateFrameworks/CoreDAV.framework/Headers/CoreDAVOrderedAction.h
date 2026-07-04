/* Runtime dump - CoreDAVOrderedAction
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVOrderedAction : CoreDAVAction
{
    int _absoluteOrder;
    NSURL * _priorURL;
}

@property (readonly, nonatomic) int absoluteOrder;
@property (retain, nonatomic) NSURL * priorURL;

- (void)dealloc;
- (NSString *)description;
- (CoreDAVOrderedAction *)initWithAction:(int)arg0 context:(NSObject *)arg1 absoluteOrder:(int)arg2;
- (int)absoluteOrder;
- (NSURL *)priorURL;
- (void)setPriorURL:(NSURL *)arg0;

@end
