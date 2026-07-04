/* Runtime dump - TCXmlStreamWriter
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCXmlStreamWriter : NSObject
{
    struct _xmlTextWriter * mStreamAPI;
    unsigned int mCurrentDepth;
    char mContentAdded;
    NSMutableSet * mAddedIds;
}

+ (struct _xmlTextWriter *)createXmlTextWriterAtEntry:(id)arg0 inOutputStream:(NSObject *)arg1 isCompressed:(char)arg2;
+ (char)startElementInStream:(struct _xmlTextWriter *)arg0 name:(NSString *)arg1 prefix:(NSString *)arg2 ns:(char *)arg3;
+ (char)endElementInStream:(struct _xmlTextWriter *)arg0;
+ (char)writeStringToStream:(struct _xmlTextWriter *)arg0 text:(NSString *)arg1;
+ (char)writeAttributeToStream:(struct _xmlTextWriter *)arg0 name:(NSString *)arg1 content:(char *)arg2 prefix:(NSString *)arg3 ns:(char *)arg4;
+ (char)writeNamespaceToStream:(struct _xmlTextWriter *)arg0 prefix:(NSString *)arg1 uri:(char *)arg2;
+ (char)writeDtdToStream:(struct _xmlTextWriter *)arg0 name:(NSString *)arg1 pubid:(id)arg2 sysid:(id)arg3 subset:(NSSet *)arg4;
+ (char)writeAnchorTargetToStream:(struct _xmlTextWriter *)arg0 name:(NSString *)arg1;
+ (char)startPlainElementInStream:(struct _xmlTextWriter *)arg0 name:(NSString *)arg1;
+ (char)writePlainAttributeToStream:(struct _xmlTextWriter *)arg0 name:(NSString *)arg1 content:(char *)arg2;
+ (struct _xmlTextWriter *)createXmlTextWriterWithBuffer:(struct _xmlOutputBuffer *)arg0;
+ (void)resetElementIds;
+ (struct _xmlTextWriter *)createXmlTextWriterWithContext:(NSObject *)arg0;
+ (char)cleanUpXmlTextWriter:(struct _xmlTextWriter *)arg0;

- (void)dealloc;
- (TCXmlStreamWriter *)initWithTextWriter:(struct _xmlTextWriter *)arg0;
- (char)startElement:(char *)arg0 prefix:(NSString *)arg1 ns:(char *)arg2;
- (char)endElement;
- (char)writeAttribute:(NSObject *)arg0 content:(char *)arg1 prefix:(NSString *)arg2 ns:(char *)arg3;
- (char)writeAttribute:(NSObject *)arg0 intContent:(long)arg1 prefix:(NSString *)arg2 ns:(char *)arg3;
- (char)writeAttribute:(NSObject *)arg0 boolContent:(char)arg1 prefix:(NSString *)arg2 ns:(char *)arg3;
- (char)writeAttribute:(NSObject *)arg0 enumContent:(int)arg1 map:(NSObject *)arg2 prefix:(NSString *)arg3 ns:(char *)arg4;
- (char)writeAttribute:(NSObject *)arg0 doubleContent:(double)arg1 prefix:(NSString *)arg2 ns:(char *)arg3;
- (char)writePlainAttribute:(NSObject *)arg0 content:(char *)arg1;
- (struct _xmlTextWriter *)textWriter;
- (char)contentAdded;
- (char)startPlainElement:(NSObject *)arg0;
- (char)writeString:(NSString *)arg0;
- (char)endElementsToBase;
- (char)writePlainAttribute:(NSObject *)arg0 intContent:(long)arg1;
- (char)writePlainAttribute:(NSObject *)arg0 boolContent:(char)arg1;
- (char)writePlainAttribute:(NSObject *)arg0 enumContent:(int)arg1 map:(NSObject *)arg2;
- (char)writePlainAttribute:(NSObject *)arg0 doubleContent:(double)arg1;
- (char)writeElementId:(NSObject *)arg0;
- (char)writeNamespace:(id)arg0 uri:(char *)arg1;
- (char)writeDtd:(id)arg0 pubid:(id)arg1 sysid:(id)arg2 subset:(NSSet *)arg3;
- (char)writeAnchorTarget:(NSObject *)arg0;

@end
