/* Runtime dump - CoreDAVActionBackedTask
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVActionBackedTask : CoreDAVTask
{
    CoreDAVAction * _backingAction;
}

@property (retain, nonatomic) CoreDAVAction * backingAction;

- (void)dealloc;
- (NSString *)description;
- (void)setBackingAction:(CoreDAVAction *)arg0;
- (CoreDAVAction *)backingAction;

@end
