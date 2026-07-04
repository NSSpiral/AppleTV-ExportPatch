/* Runtime dump - WKQuadObject
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WKQuadObject : NSObject
{
    struct _WKQuad _quad;
}

- (struct _WKQuad)quad;
- (void).cxx_construct;
- (struct CGRect)boundingBox;
- (WKQuadObject *)initWithQuad:(struct _WKQuad)arg0;

@end
