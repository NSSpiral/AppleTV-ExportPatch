/* Runtime dump - DOMEntity
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMEntity : DOMNode

@property (readonly, copy) NSString * publicId;
@property (readonly, copy) NSString * systemId;
@property (readonly, copy) NSString * notationName;

- (NSString *)publicId;
- (NSString *)systemId;
- (NSString *)notationName;

@end
