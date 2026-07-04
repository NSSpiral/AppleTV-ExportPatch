/* Runtime dump - UIRuntimeOutletCollectionConnection
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIRuntimeOutletCollectionConnection : UIRuntimeConnection
{
    NSString * runtimeCollectionClassName;
    char addsContentToExistingCollection;
}

@property (copy) NSString * runtimeCollectionClassName;
@property char addsContentToExistingCollection;

- (void)dealloc;
- (UIRuntimeOutletCollectionConnection *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void)connectForSimulator;
- (void)connect;
- (NSString *)runtimeCollectionClassName;
- (void)performConnect;
- (void)setRuntimeCollectionClassName:(NSString *)arg0;
- (char)addsContentToExistingCollection;
- (void)setAddsContentToExistingCollection:(char)arg0;

@end
