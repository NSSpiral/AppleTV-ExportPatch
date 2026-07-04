/* Runtime dump - DOMStyleSheet
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMStyleSheet : DOMObject

@property (readonly, copy) NSString * type;
@property char disabled;
@property (readonly) DOMNode * ownerNode;
@property (readonly) DOMStyleSheet * parentStyleSheet;
@property (readonly, copy) NSString * href;
@property (readonly, copy) NSString * title;
@property (readonly) DOMMediaList * media;

- (void)dealloc;
- (NSString *)type;
- (NSString *)title;
- (NSString *)href;
- (char)disabled;
- (void)setDisabled:(char)arg0;
- (void)finalize;
- (DOMMediaList *)media;
- (DOMStyleSheet *)parentStyleSheet;
- (DOMNode *)ownerNode;

@end
