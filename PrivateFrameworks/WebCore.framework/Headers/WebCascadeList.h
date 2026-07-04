/* Runtime dump - WebCascadeList
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCascadeList : NSArray
{
    struct Font * _font;
    int _character;
    unsigned int _count;
    struct Vector<WTF::RetainPtr<const __CTFontDescriptor *>, 16, WTF::CrashOnOverflow> _fontDescriptors;
}

- (unsigned int)count;
- (NSObject *)objectAtIndex:(unsigned int)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;
- (WebCascadeList *)initWithFont:(struct Font *)arg0 character:(struct Font)arg1;

@end
