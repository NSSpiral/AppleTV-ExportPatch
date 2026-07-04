/* Runtime dump - NSXMLParser
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSXMLParser : NSObject
{
    id _reserved0;
    id _delegate;
    id _reserved1;
    id _reserved2;
    id _reserved3;
    struct _xmlSAXHandler * _saxHandler;
    struct _xmlParserCtxt * _parserContext;
    unsigned int _parserFlags;
    NSError * _error;
    NSMutableArray * _namespaces;
    struct __CFDictionary * _slowStringMap;
    char _delegateAborted;
    char _haveDetectedEncoding;
    NSData * _bomChunk;
    unsigned int _chunkSize;
    NSSet * _allowedEntityURLs;
    NSURL * _url;
    unsigned int _externalEntityResolvingPolicy;
}

@property <NSXMLParserDelegate> * delegate;
@property char shouldProcessNamespaces;
@property char shouldReportNamespacePrefixes;
@property unsigned int externalEntityResolvingPolicy;
@property (copy) NSSet * allowedExternalEntityURLs;
@property (readonly, copy) NSError * parserError;
@property char shouldResolveExternalEntities;

+ (void)setCurrentParser:(NSObject *)arg0;
+ (NSXMLParser *)currentParser;

- (void)_initializeSAX2Callbacks;
- (NSXMLParser *)initForIncrementalParsing;
- (unsigned int)externalEntityResolvingPolicy;
- (NSSet *)allowedExternalEntityURLs;
- (void)_setExpandedParserError:(NSError *)arg0;
- (void)_setParserError:(int)arg0;
- (char)shouldResolveExternalEntities;
- (char)_handleParseResult:(int)arg0;
- (char)finishIncrementalParse;
- (char)parseFromStream;
- (void)setShouldProcessNamespaces:(char)arg0;
- (void)setShouldReportNamespacePrefixes:(char)arg0;
- (void)setShouldResolveExternalEntities:(char)arg0;
- (void)setAllowedExternalEntityURLs:(NSSet *)arg0;
- (void)setExternalEntityResolvingPolicy:(unsigned int)arg0;
- (struct _xmlParserInput *)_xmlExternalEntityWithURL:(char *)arg0 identifier:(char *)arg1 context:(char *)arg2 originalLoaderFunction:(int)arg3;
- (char)shouldProcessNamespaces;
- (char)shouldReportNamespacePrefixes;
- (void)setShouldContinueAfterFatalError:(char)arg0;
- (char)shouldContinueAfterFatalError;
- (void)abortParsing;
- (NSObject *)publicID;
- (NSObject *)systemID;
- (int)lineNumber;
- (void)_pushNamespaces:(id)arg0;
- (void)_popNamespaces;
- (void)dealloc;
- (void)setDelegate:(<NSXMLParserDelegate> *)arg0;
- (<NSXMLParserDelegate> *)delegate;
- (NSXMLParser *)initWithData:(NSData *)arg0;
- (NSXMLParser *)initWithContentsOfURL:(NSURL *)arg0;
- (NSXMLParser *)initWithStream:(NSObject *)arg0;
- (NSError *)parserError;
- (char)parse;
- (int)columnNumber;
- (char)parseData:(NSData *)arg0;
- (void)finalize;

@end
