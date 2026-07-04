/* Runtime dump - MFMessageBodyElement
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMessageBodyElement : NSObject <MFMessageBodyElement_Private>
{
    MFMessageBodyParser * _parser;
    NSArray * _nodes;
    unsigned int _quoteLevel;
    unsigned int _externalRetainCount;
    int _validAttributes;
    int _attributes;
}

@property (nonatomic) MFMessageBodyParser * parser;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (retain, nonatomic) NSArray * nodes;

- (unsigned int)quoteLevel;
- (void)setParser:(MFMessageBodyParser *)arg0;
- (char)isExternallyRetained;
- (char)_hasValueForAttributes:(int)arg0;
- (void)_setValue:(int)arg0 forAttributes:(int)arg1;
- (id)retainExternally;
- (void)releaseExternally;
- (int)valueForAttributes:(int)arg0;
- (id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg0;
- (unsigned int)getQuoteLevel;
- (MFMessageBodyParser *)parser;
- (void)dealloc;
- (MFMessageBodyElement *)init;
- (NSString *)description;
- (void)reset;
- (void)setNodes:(NSArray *)arg0;
- (NSArray *)nodes;

@end
