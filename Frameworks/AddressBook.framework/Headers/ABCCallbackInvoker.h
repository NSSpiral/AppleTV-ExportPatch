/* Runtime dump - ABCCallbackInvoker
 * Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABCCallbackInvoker : NSObject
{
    /* block */ id * cb;
    void * ab;
    void * context;
}

- (void)invoke;

@end
