/* Runtime dump - TIKeyboardLayoutFactory
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardLayoutFactory : NSObject
{
    void * _layoutsLibraryHandle;
    NSMutableDictionary * _internalCache;
}

@property (readonly, nonatomic) void * layoutsLibraryHandle;
@property (retain) NSMutableDictionary * internalCache;

+ (TIKeyboardLayoutFactory *)sharedKeyboardFactory;
+ (NSString *)layoutsFileName;

- (void)dealloc;
- (TIKeyboardLayoutFactory *)init;
- (NSString *)keyboardWithName:(NSString *)arg0 inCache:(NSObject *)arg1;
- (id)keyboardPrefixForWidth:(float)arg0;
- (NSMutableDictionary *)internalCache;
- (void)setInternalCache:(NSMutableDictionary *)arg0;
- (void *)layoutsLibraryHandle;

@end
