#import <UIKit/UIKit.h>
#import "MenuItem.h"

@protocol MenuItemTypeSelectionViewDelegate;

@interface MenuItemTypeSelectionView : UIView

@property (nonatomic, weak) id <MenuItemTypeSelectionViewDelegate> delegate;

@end

@protocol MenuItemTypeSelectionViewDelegate <NSObject>

- (void)itemTypeSelectionViewChanged:(MenuItemTypeSelectionView *)typeSelectionView type:(MenuItemType)itemType;

@end