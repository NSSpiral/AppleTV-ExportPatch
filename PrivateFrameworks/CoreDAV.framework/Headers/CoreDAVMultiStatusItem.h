/* Runtime dump - CoreDAVMultiStatusItem
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVMultiStatusItem : CoreDAVItem
{
    NSMutableArray * _orderedResponses;
    CoreDAVLeafItem * _responseDescription;
}

@property (readonly, nonatomic) NSSet * responses;
@property (retain, nonatomic) NSMutableArray * orderedResponses;
@property (retain, nonatomic) CoreDAVLeafItem * responseDescription;

+ (NSArray *)copyParseRules;

- (void)dealloc;
- (CoreDAVMultiStatusItem *)init;
- (NSString *)description;
- (NSMutableArray *)orderedResponses;
- (CoreDAVLeafItem *)responseDescription;
- (void)setResponseDescription:(CoreDAVLeafItem *)arg0;
- (void)setOrderedResponses:(NSMutableArray *)arg0;
- (NSSet *)responses;
- (void)addResponse:(NSURLResponse *)arg0;

@end
