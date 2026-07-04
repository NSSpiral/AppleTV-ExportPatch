/* Runtime dump - ATVNetflixMediaOpenRequest
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVNetflixMediaOpenRequest : NSObject
{
    NSString * _url;
    NSDictionary * _params;
    id _openFinishedHandler;
}

@property (retain, nonatomic) NSString * url;
@property (retain, nonatomic) NSDictionary * params;
@property (copy, nonatomic) id openFinishedHandler;

- (void)setParams:(NSDictionary *)arg0;
- (id /* block */)openFinishedHandler;
- (void)setOpenFinishedHandler:(id /* block */)arg0;
- (NSDictionary *)params;
- (NSString *)url;
- (void)setUrl:(NSString *)arg0;
- (void).cxx_destruct;

@end
