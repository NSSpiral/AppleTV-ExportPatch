/* Runtime dump - TPBodyRep
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPBodyRep : TSWPRep
{
    NSSet * _lastSelectedInfos;
}

- (TPBodyRep *)initWithLayout:(TSDLayout *)arg0 canvas:(TSDCanvas *)arg1;
- (NSObject *)hitRep:(struct CGPoint)arg0;
- (id)hitRepChrome:(struct CGPoint)arg0;
- (id)hitReps:(struct CGPoint)arg0 withSlop:(struct CGSize)arg1;
- (CALayer *)colorBehindLayer:(id)arg0;
- (char)p_doesRep:(NSObject *)arg0 containCharIndex:(unsigned int)arg1 isStart:(char)arg2;
- (void)dealloc;
- (TSDCommentStorage *)storage;

@end
