/* Runtime dump - ATVXMLNode
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVXMLNode : NSObject
{
    struct _xmlNode * _privateXmlNode;
}

@property (readonly) NSString * name;
@property (copy) NSString * textContent;
@property (retain) id associatedObject;
@property (readonly) ATVXMLDocument * ownerDocument;
@property (readonly) ATVXMLNode * parent;
@property (readonly) NSArray * childNodes;
@property (readonly) ATVXMLNode * nextSibling;
@property (readonly) ATVXMLNode * previousSibling;

+ (NSObject *)nodeWithXmlNode:(struct _xmlNode *)arg0;
+ (void)initializeXMLParser;

- (void)dealloc;
- (ATVXMLNode *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)name;
- (ATVXMLNode *)copyWithZone:(struct _NSZone *)arg0;
- (ATVXMLDocument *)ownerDocument;
- (NSArray *)childNodes;
- (ATVXMLNode *)previousSibling;
- (ATVXMLNode *)nextSibling;
- (NSString *)nodesForXPath:(NSString *)arg0 error:(id *)arg1;
- (void)removeFromParent;
- (char)insertChild:(NSObject *)arg0 after:(id)arg1 error:(id *)arg2;
- (char)replaceChild:(NSObject *)arg0 with:(id)arg1 error:(id *)arg2;
- (ATVXMLNode *)initWithXmlNode:(struct _xmlNode *)arg0;
- (void)lockNode:(NSObject *)arg0;
- (NSString *)_XMLString;
- (char)_insertChild:(NSObject *)arg0 otherChild:(NSObject *)arg1 insertFunction:(/* block */ id *)arg2 error:(id *)arg3;
- (NSObject *)domCloneNode:(char)arg0;
- (char)appendChild:(NSObject *)arg0 error:(id *)arg1;
- (char)insertChild:(NSObject *)arg0 before:(id)arg1 error:(id *)arg2;
- (char)domReplaceChild:(NSObject *)arg0 with:(id)arg1 error:(id *)arg2;
- (char)domRemoveChild:(NSObject *)arg0 error:(id *)arg1;
- (NSString *)attributeValueForName:(NSString *)arg0;
- (void)setAttributeValue:(KNBuildAttributeValue *)arg0 forName:(NSString *)arg1;
- (void)removeAttributeForName:(NSString *)arg0;
- (char)hasAttributeForName:(NSString *)arg0;
- (void)setAssociatedObject:(NSObject *)arg0;
- (NSObject *)associatedObject;
- (NSObject *)domOwnerDocument;
- (NSError *)domWriteToStringWithError:(id *)arg0;
- (void)clearNode;
- (ATVXMLNode *)parent;
- (NSString *)textContent;
- (void)setTextContent:(NSString *)arg0;

@end
