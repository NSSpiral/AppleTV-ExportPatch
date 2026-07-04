/* Runtime dump - MKThreadContext
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKThreadContext : NSObject
{
    int _CA_disableActionsCounter;
}

+ (MKThreadContext *)currentContext;

- (void)_CA_setDisableActions:(char)arg0;

@end
