/* Runtime dump - ATVFeedElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVFeedDocument, ATVFeedMerchant;
@interface ATVFeedElement : NSObject
{
    NSString * _identifier;
    ATVFeedMerchant * _merchant;
    NSString * _type;
    ATVFeedElement * _parent;
    NSDictionary * _eventHandlerScripts;
}

@property (copy, nonatomic) NSString * identifier;
@property (retain, nonatomic) ATVFeedMerchant * merchant;
@property (copy, nonatomic) NSString * type;
@property (weak, nonatomic) ATVFeedElement * parent;
@property (retain, nonatomic) NSDictionary * eventHandlerScripts;
@property (readonly, nonatomic) ATVFeedDocument * ownerDocument;

+ (NSObject *)elementWithXMLElement:(NSObject *)arg0 merchant:(ATVFeedMerchant *)arg1 parent:(ATVFeedElement *)arg2;

- (ATVFeedMerchant *)merchant;
- (void)setMerchant:(ATVFeedMerchant *)arg0;
- (ATVFeedElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(ATVFeedMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (NSString *)_stylesForKeyPath:(NSString *)arg0;
- (NSDictionary *)eventHandlerScripts;
- (void)setEventHandlerScripts:(NSDictionary *)arg0;
- (NSString *)identifier;
- (void)setType:(NSString *)arg0;
- (NSString *)type;
- (void)setIdentifier:(NSString *)arg0;
- (ATVFeedDocument *)ownerDocument;
- (void).cxx_destruct;
- (ATVFeedElement *)parent;
- (void)setParent:(ATVFeedElement *)arg0;

@end
