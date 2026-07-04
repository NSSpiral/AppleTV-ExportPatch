/* Runtime dump - ABWeakReference
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABWeakReference : NSObject
{
    <NSObject> * _reference;
}

+ (ABWeakReference *)weakReferenceWithObject:(NSObject *)arg0;

- (NSObject *)_initWithObject:(NSObject *)arg0;
- (void)dealloc;
- (ABWeakReference *)init;
- (NSObject *)retainedReference;

@end
