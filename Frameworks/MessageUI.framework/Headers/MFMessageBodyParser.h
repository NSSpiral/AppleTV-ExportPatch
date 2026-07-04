/* Runtime dump - MFMessageBodyParser
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMessageBodyParser : MFMessageBodyParserObject
{
    NSMutableArray * _subparsers;
    NSMutableArray * _elementPool;
    NSMutableArray * _paragraphNodes;
    id _foundMessageBodyElementBlock;
    NSError * _parserError;
    struct __CFArray * _nodesStackCache;
    struct __CFDictionary * _nodesLevelCache;
    struct __CFDictionary * _nodesQuoteLevelCache;
    unsigned int _options;
}

@property (nonatomic) unsigned int options;

+ (char)isLinebreakImpliedBeforeTagName:(NSString *)arg0;
+ (char)isLinebreakImpliedAfterTagName:(NSString *)arg0;

- (void)addSubparser:(MFMessageBodySubparser *)arg0;
- (void)copyBlocks;
- (char)shouldProceedParsing;
- (Class)messageBodyStringAccumulatorClass;
- (int)messageBodyStringAccumulatorDefaultOptions;
- (Class)messageBodyElementClass;
- (void)flushParagraphNodes;
- (NSObject *)getAvailableMessageBodyElement;
- (void)didFindBodyElement:(NSObject *)arg0;
- (void)getLevel:(int *)arg0 quoteLevel:(int *)arg1 forBodyNode:(NSObject *)arg2;
- (NSDictionary *)newStringAccumulatorWithOptions:(int)arg0 lengthLimit:(unsigned int)arg1;
- (void)setFoundMessageBodyElementBlock:(id /* block */)arg0;
- (void)removeSubparser:(MFMessageBodySubparser *)arg0;
- (char)isLandmarkTagName:(NSString *)arg0;
- (char)shouldIgnoreTagWithTagName:(NSString *)arg0;
- (void)enqueueParagraphNode:(NSObject *)arg0 withTagName:(NSString *)arg1;
- (void)willBeginParsing;
- (void)didFinishParsing;
- (void)didFindError:(NSError *)arg0;
- (unsigned int)quoteLevelForBodyNode:(NSObject *)arg0;
- (void)dealloc;
- (MFMessageBodyParser *)init;
- (void)setOptions:(unsigned int)arg0;
- (unsigned int)options;
- (NSError *)parserError;
- (char)parse;

@end
