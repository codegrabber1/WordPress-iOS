#import <UIKit/UIKit.h>

@class ReaderTopic;
@interface ReaderPostsViewController : UITableViewController
@property (nonatomic, strong) ReaderTopic *readerTopic;
@property (nonatomic, assign) BOOL skipIpadTopPadding;
@end
