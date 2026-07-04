/* Runtime dump - TCXmlPrefixStreamWriter
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCXmlPrefixStreamWriter : TCXmlStreamWriter
{
    NSMutableArray * mStateStack;
}

+ (struct _xmlTextWriter *)createXmlTextWriterAtEntry:(id)arg0 inOutputStream:(NSObject *)arg1 isCompressed:(char)arg2;
+ (struct _xmlTextWriter *)createNonXmlTextWriterAtEntry:(id)arg0 inOutputStream:(NSObject *)arg1 isCompressed:(char)arg2;

- (void)dealloc;
- (CAState *)currentState;
- (char)addElement:(NSObject *)arg0;
- (TCXmlPrefixStreamWriter *)initWithTextWriter:(struct _xmlTextWriter *)arg0;
- (NSString *)pushStateWithElementPrefix:(NSString *)arg0 attributePrefix:(NSString *)arg1;
- (void)popState;
- (NSObject *)pushState;
- (NSString *)currentElementPrefix;
- (char)startElement:(char *)arg0;
- (NSString *)currentAttributePrefix;
- (char)writeAttribute:(NSObject *)arg0 content:(char *)arg1;
- (char)writeOneAttributeElementWithName:(NSString *)arg0 attributeName:(NSString *)arg1 content:(char *)arg2;
- (char)writeOneAttributeElementWithName:(NSString *)arg0 attributeName:(NSString *)arg1 boolContent:(char)arg2;
- (char)writeOneAttributeElementWithName:(NSString *)arg0 attributeName:(NSString *)arg1 intContent:(long)arg2;
- (char)writeOneAttributeElementWithName:(NSString *)arg0 attributeName:(NSString *)arg1 enumContent:(int)arg2 map:(NSObject *)arg3;
- (char)writeOneAttributeElementWithName:(NSString *)arg0 attributeName:(NSString *)arg1 doubleContent:(double)arg2;
- (void)pushElementPrefix:(NSString *)arg0 attributePrefix:(NSString *)arg1;
- (NSString *)pushStateWithSharedPrefix:(NSString *)arg0;
- (char)writeAttribute:(NSObject *)arg0 boolContent:(char)arg1;
- (char)writeAttribute:(NSObject *)arg0 intContent:(long)arg1;
- (char)writeAttribute:(NSObject *)arg0 enumContent:(int)arg1 map:(NSObject *)arg2;
- (char)writeAttribute:(NSObject *)arg0 doubleContent:(double)arg1;
- (char)writeValAttributeOnlyElementWithName:(NSString *)arg0 content:(char *)arg1;
- (char)writeValAttributeOnlyElementWithName:(NSString *)arg0 boolContent:(char)arg1;
- (char)writeValAttributeOnlyElementWithName:(NSString *)arg0 intContent:(long)arg1;
- (char)writeValAttributeOnlyElementWithName:(NSString *)arg0 enumContent:(int)arg1 map:(NSObject *)arg2;
- (char)writeValAttributeOnlyElementWithName:(NSString *)arg0 doubleContent:(double)arg1;
- (char)startOAElement:(NSObject *)arg0;
- (char)writeOAAttribute:(NSObject *)arg0 content:(char *)arg1;
- (void)pushOAState;
- (char)writeOAAttribute:(NSObject *)arg0 boolContent:(char)arg1;
- (char)writeOAAttribute:(NSObject *)arg0 intContent:(long)arg1;
- (char)writeOAAttribute:(NSObject *)arg0 enumContent:(int)arg1 map:(NSObject *)arg2;
- (char)writeOAAttribute:(NSObject *)arg0 doubleContent:(double)arg1;
- (char)writeIndexAttribute:(NSObject *)arg0 intContent:(unsigned long)arg1;
- (void)writeTextString:(NSString *)arg0 forElement:(NSObject *)arg1;

@end
