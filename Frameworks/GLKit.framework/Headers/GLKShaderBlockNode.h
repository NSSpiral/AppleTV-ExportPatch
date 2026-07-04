/* Runtime dump - GLKShaderBlockNode
 * Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKShaderBlockNode : NSObject <NSXMLParserDelegate, NSCopying>
{
    struct GLKBigInt_s _mask;
    GLKShaderBlockNode * _parent;
    GLKShaderBlockNode * _next;
    GLKShaderBlockNode * _children;
    NSString * _label;
    NSString * _loopVar;
    int _type;
    int _unrollCt;
    unsigned int _index;
    NSMutableString * _blockText;
    int _propertyClass;
    char _indexedMask;
}

@property (copy, nonatomic) NSString * label;
@property (copy, nonatomic) NSString * loopVar;
@property (retain, nonatomic) NSMutableString * blockText;
@property (nonatomic) GLKShaderBlockNode * parent;
@property (nonatomic) GLKShaderBlockNode * next;
@property (nonatomic) GLKShaderBlockNode * children;
@property (nonatomic) int type;
@property (nonatomic) struct GLKBigInt_s mask;
@property (nonatomic) int unrollCt;
@property (nonatomic) unsigned int index;
@property (nonatomic) int propertyClass;
@property (nonatomic) char indexedMask;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)setMasksWithRoot:(NSObject *)arg0 treeRoot:(NSObject *)arg1 mask:(struct GLKBigInt_s *)arg2;
+ (NSObject *)copyTreeWithRoot:(NSObject *)arg0 parent:(GLKShaderBlockNode *)arg1;
+ (void)buildUnrollNodeArray:(NSArray *)arg0 array:(NSArray *)arg1;
+ (GLKShaderBlockNode *)copyTreeWithRootButNotSiblings:(id)arg0 parent:(GLKShaderBlockNode *)arg1;
+ (void)setIndicesForRoot:(NSObject *)arg0 andReplaceLoopVar:(id)arg1 baseLabel:(NSString *)arg2 basePropertyClass:(int)arg3 usingIndex:(unsigned int)arg4 indexString:(NSString *)arg5;
+ (void)insertNode:(NSObject *)arg0 afterSibling:(id)arg1;
+ (struct GLKBigInt_s)maskForLabel:(NSString *)arg0 root:(NSObject *)arg1 index:(int)arg2;
+ (unsigned int)nodeCt:(id)arg0 nodeCt:(unsigned int *)arg1;
+ (void)printTree:(id)arg0;
+ (void)printTreeVerbose:(id)arg0;

- (int)unrollCt;
- (int)propertyClass;
- (void)setPropertyClass:(int)arg0;
- (NSString *)loopVar;
- (NSMutableString *)blockText;
- (void)setUnrollCt:(int)arg0;
- (char)indexedMask;
- (void)setIndexedMask:(char)arg0;
- (void)setBlockText:(NSMutableString *)arg0;
- (void)setLoopVar:(NSString *)arg0;
- (GLKShaderBlockNode *)next;
- (void)dealloc;
- (GLKShaderBlockNode *)init;
- (NSString *)description;
- (void)setType:(int)arg0;
- (int)type;
- (GLKShaderBlockNode *)copyWithZone:(struct _NSZone *)arg0;
- (struct GLKBigInt_s)mask;
- (void)setMask:(struct GLKBigInt_s)arg0;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (unsigned int)index;
- (void)setIndex:(unsigned int)arg0;
- (void)parser:(NSXMLParser *)arg0 didStartElement:(NSString *)arg1 namespaceURI:(NSString *)arg2 qualifiedName:(NSString *)arg3 attributes:(NSDictionary *)arg4;
- (void)parser:(NSXMLParser *)arg0 didEndElement:(NSString *)arg1 namespaceURI:(NSString *)arg2 qualifiedName:(NSString *)arg3;
- (void)parser:(NSXMLParser *)arg0 foundCharacters:(NSString *)arg1;
- (void)setChildren:(GLKShaderBlockNode *)arg0;
- (GLKShaderBlockNode *)parent;
- (void)setParent:(GLKShaderBlockNode *)arg0;
- (void)setNext:(GLKShaderBlockNode *)arg0;
- (GLKShaderBlockNode *)children;

@end
