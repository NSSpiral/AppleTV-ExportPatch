/* Runtime dump - DOMKeyboardEvent
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMKeyboardEvent : DOMUIEvent

@property (readonly, copy) NSString * keyIdentifier;
@property (readonly) unsigned int location;
@property (readonly) unsigned int keyLocation;
@property (readonly) char ctrlKey;
@property (readonly) char shiftKey;
@property (readonly) char altKey;
@property (readonly) char metaKey;
@property (readonly) char altGraphKey;
@property (readonly) int keyCode;
@property (readonly) int charCode;

- (unsigned int)location;
- (char)ctrlKey;
- (char)shiftKey;
- (char)altKey;
- (char)metaKey;
- (NSString *)keyIdentifier;
- (unsigned int)keyLocation;
- (char)altGraphKey;
- (int)keyCode;
- (int)charCode;
- (char)getModifierState:(NSObject *)arg0;
- (void)initKeyboardEvent:(NSObject *)arg0 canBubble:(char)arg1 cancelable:(char)arg2 view:(NSObject *)arg3 keyIdentifier:(NSString *)arg4 location:(unsigned int)arg5 ctrlKey:(char)arg6 altKey:(char)arg7 shiftKey:(char)arg8 metaKey:(char)arg9 altGraphKey:(char)arg10;
- (void)initKeyboardEvent:(NSObject *)arg0 canBubble:(char)arg1 cancelable:(char)arg2 view:(NSObject *)arg3 keyIdentifier:(NSString *)arg4 location:(unsigned int)arg5 ctrlKey:(char)arg6 altKey:(char)arg7 shiftKey:(char)arg8 metaKey:(char)arg9;
- (void)initKeyboardEvent:(NSObject *)arg0 canBubble:(char)arg1 cancelable:(char)arg2 view:(NSObject *)arg3 keyIdentifier:(NSString *)arg4 keyLocation:(unsigned int)arg5 ctrlKey:(char)arg6 altKey:(char)arg7 shiftKey:(char)arg8 metaKey:(char)arg9 altGraphKey:(char)arg10;
- (void)initKeyboardEvent:(NSObject *)arg0 canBubble:(char)arg1 cancelable:(char)arg2 view:(NSObject *)arg3 keyIdentifier:(NSString *)arg4 keyLocation:(unsigned int)arg5 ctrlKey:(char)arg6 altKey:(char)arg7 shiftKey:(char)arg8 metaKey:(char)arg9;

@end
