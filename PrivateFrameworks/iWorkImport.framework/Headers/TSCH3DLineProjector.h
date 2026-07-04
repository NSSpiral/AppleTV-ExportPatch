/* Runtime dump - TSCH3DLineProjector
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DLineProjector : TSCH3DProjector
{
    struct line<glm::detail::tvec3<float> > mLine;
}

@property (nonatomic) struct line<glm::detail::tvec3<float> > line;

- (char)projectPoint:(struct tvec2<float> *)arg0 returningPoint:(struct tvec2<float>)arg1;
- (void).cxx_construct;
- (void)setLine:(struct line<glm::detail::tvec3<float> >)arg0;
- (struct line<glm::detail::tvec3<float> >)line;

@end
