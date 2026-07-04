/* Runtime dump - WebAccessibilityTextMarker
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebAccessibilityTextMarker : NSObject
{
    struct AXObjectCache * _cache;
    struct TextMarkerData _textMarkerData;
}

+ (NSObject *)textMarkerWithVisiblePosition:(struct VisiblePosition *)arg0 cache:(struct AXObjectCache *)arg1;

- (NSString *)description;
- (WebAccessibilityTextMarker *)initWithData:(NSData *)arg0 cache:(struct AXObjectCache *)arg1;
- (void).cxx_construct;
- (WebAccessibilityTextMarker *)initWithTextMarker:(struct TextMarkerData *)arg0 cache:(int)arg1;
- (WebAccessibilityTextMarker *)initWithData:(NSData *)arg0 accessibilityObject:(struct WebAccessibilityObjectWrapper *)arg1;
- (NSData *)dataRepresentation;
- (struct VisiblePosition)visiblePosition;

@end
