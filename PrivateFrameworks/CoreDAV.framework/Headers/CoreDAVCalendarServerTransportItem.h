/* Runtime dump - CoreDAVCalendarServerTransportItem
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVCalendarServerTransportItem : CoreDAVItem
{
    CoreDAVLeafItem * _apsBundleID;
    CoreDAVLeafItem * _courierServer;
    CoreDAVItemWithHrefChildItem * _subscriptionURL;
    CoreDAVItemWithHrefChildItem * _tokenURL;
    CoreDAVLeafItem * _apsEnv;
    CoreDAVLeafItem * _refreshInterval;
    CoreDAVLeafItem * _xmppServer;
    CoreDAVLeafItem * _xmppURI;
}

@property (retain, nonatomic) CoreDAVLeafItem * apsBundleID;
@property (retain, nonatomic) CoreDAVLeafItem * courierServer;
@property (retain, nonatomic) CoreDAVItemWithHrefChildItem * subscriptionURL;
@property (retain, nonatomic) CoreDAVItemWithHrefChildItem * tokenURL;
@property (retain, nonatomic) CoreDAVLeafItem * apsEnv;
@property (retain, nonatomic) CoreDAVLeafItem * refreshInterval;
@property (retain, nonatomic) CoreDAVLeafItem * xmppServer;
@property (retain, nonatomic) CoreDAVLeafItem * xmppURI;

+ (NSArray *)copyParseRules;

- (void)dealloc;
- (CoreDAVCalendarServerTransportItem *)init;
- (NSString *)description;
- (CoreDAVItemWithHrefChildItem *)subscriptionURL;
- (CoreDAVItemWithHrefChildItem *)tokenURL;
- (CoreDAVLeafItem *)apsBundleID;
- (CoreDAVLeafItem *)courierServer;
- (CoreDAVLeafItem *)apsEnv;
- (CoreDAVLeafItem *)refreshInterval;
- (CoreDAVLeafItem *)xmppServer;
- (CoreDAVLeafItem *)xmppURI;
- (void)setSubscriptionURL:(CoreDAVItemWithHrefChildItem *)arg0;
- (void)setTokenURL:(CoreDAVItemWithHrefChildItem *)arg0;
- (void)setApsBundleID:(CoreDAVLeafItem *)arg0;
- (void)setCourierServer:(CoreDAVLeafItem *)arg0;
- (void)setApsEnv:(CoreDAVLeafItem *)arg0;
- (void)setRefreshInterval:(CoreDAVLeafItem *)arg0;
- (void)setXmppServer:(CoreDAVLeafItem *)arg0;
- (void)setXmppURI:(CoreDAVLeafItem *)arg0;

@end
